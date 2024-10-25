use std::collections::HashSet;

use proconio;
fn main() {
    proconio::input! {
        N: usize,
        M: usize,
        V: usize,
        s: [proconio::marker::Chars; N],
        t: [proconio::marker::Chars; N],
    }
    let nV: usize = 1;
    let (mut x, mut y): (isize, isize) = (0, 0);
    // let mut S = Vec::new();

    let mut s_points = Vec::new();
    let mut t_points = Vec::new();
    
    for i in 0..N {
        for j in 0..N {
            if s[i][j] == '1' { s_points.push((i, j)); }
            if t[i][j] == '1' { t_points.push((i, j)); }
        }
    }

    remove_common_elements(&mut s_points, &mut t_points);

    // println!("{:?}", s_points);
    // println!("{:?}", t_points);

    println!("{}", nV);
    println!("{} {}", x, y);

    for i in 0..s_points.len() {
        let dx = x as isize - s_points[i].0 as isize;
        let dy = y as isize - s_points[i].1 as isize;
        // println!("{} {}", dx, dy);

        match dx {
            dx if dx > 0 => for j in 0..dx { println!("U"); },
            dx if dx < 0 => for j in dx..0 { println!("D"); },
            _ => { println!("."); },
        }

        match dy {
            dy if dy > 0 => for j in 0..dy { println!("L"); },
            dy if dy < 0 => for j in dy..0 { println!("R"); },
            _ => { println!("."); },
        }

        x = x - dx;
        y = y - dy;

        println!("P");

        let dx = x as isize - t_points[i].0 as isize;
        let dy = y as isize - t_points[i].1 as isize;
        // println!("{} {}", dx, dy);

        match dx {
            dx if dx > 0 => for j in 0..dx { println!("U."); },
            dx if dx < 0 => for j in dx..0 { println!("D."); },
            _ => { println!(".."); },
        }

        match dy {
            dy if dy > 0 => for j in 0..dy { println!("L."); },
            dy if dy < 0 => for j in dy..0 { println!("R."); },
            _ => { println!(".."); },
        }

        x = x - dx;
        y = y - dy;

        println!("P");
    }
}

fn remove_common_elements(vec1: &mut Vec<(usize, usize)>, vec2: &mut Vec<(usize, usize)>) {
    // HashSetを使って共通要素を特定
    let set1: HashSet<_> = vec1.iter().cloned().collect();
    let set2: HashSet<_> = vec2.iter().cloned().collect();
    
    // 共通部分を求める
    let common_elements: HashSet<_> = set1.intersection(&set2).cloned().collect();

    // vec1から共通要素を削除
    vec1.retain(|item| !common_elements.contains(item));
    // vec2から共通要素を削除
    vec2.retain(|item| !common_elements.contains(item));
}
