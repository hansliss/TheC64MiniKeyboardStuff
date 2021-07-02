$fn=256;

stemWidth=2.5;
stemDepth=2;
stemHeight=2.8;

stemPlayY=0.1;
stemPlayX=0.05;

cylinderHeight=4;
cylinderDiameter=4.5;

union() {
    difference() {
        cylinder(r=cylinderDiameter/2, h=cylinderHeight);
        translate([0, 0, cylinderHeight - 1])
            rotate_extrude(convexity = 10)
                translate([cylinderDiameter/2, 0, 0])
                    circle(r = 0.2, $fn = 100);
        translate([0, 0, cylinderHeight - 2])
            rotate_extrude(convexity = 10)
                translate([cylinderDiameter/2, 0, 0])
                    circle(r = 0.2, $fn = 100);
        translate([0, 0, cylinderHeight - 3])
            rotate_extrude(convexity = 10)
                translate([cylinderDiameter/2, 0, 0])
                    circle(r = 0.2, $fn = 100);
        translate([0, 0, stemHeight/2 - 0.01])
            cube([stemWidth + stemPlayX, stemDepth + stemPlayY, stemHeight + 0.5], center=true);
    }
    translate([-(stemWidth/2 + stemPlayX), - (stemDepth/2 + stemPlayY + 0.02), 1])
        rotate([0, 90, 0])
            cylinder(r=0.1, h=stemWidth + stemPlayX*2);
    translate([-(stemWidth/2 + stemPlayX), (stemDepth/2 + stemPlayY + 0.02), 1])
        rotate([0, 90, 0])
            cylinder(r=0.1, h=stemWidth + stemPlayX*2);
}