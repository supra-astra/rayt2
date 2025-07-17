const IMAGE_HEIGHT: u8 = 255;
const IMAGE_WIDTH: u8 = 255;


fn main() {
    print!("P3\n%d %d\n255\n",IMAGE_HEIGHT,IMAGE_WIDTH);
    for j in 0..=IMAGE_HEIGHT {
        for i in range 0..=IMAGE_WIDTH {
            let r = float64(i) / (IMAGE_WIDTH-1);
            let g = float64(j) / (IMAGE_HEIGHT-1);
            let b = 0.0;

            let ir = int64(255.999*r);
            let ig = int64(255.999*g);
            let ib = int64(255.999*b);

            print!("%d %d %d\n",ir,ig,ib);
        }
    }
}
