[x,y]=meshgrid(linspace(-4,4));

streamslice(x,y,-y,x+(x.^2-1).*y);
xlabel('x1');ylabel('x2');