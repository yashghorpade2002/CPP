# include <iostream>
int main() {

    int n,m;
    std::cin >> n >> m;
    
    if(n > m) {
    
        for(int i=1; i<=n; i++) {
        
            if(i%2 != 0) {
            
                for(int j=1; j<(n+1); j++) {
                
                    int x = 0;
                    for(int k=n; k>=j; k--) {
                    
                        std::cout << "  ";

                    }
                    for(int l=1; l<=(j*2)-1; l++) {
                    
                        if(l<j) {
                            
                            if(x>m) {
                            
                                std::cout << m << " ";
                                x++;
                            } else {
                                
                                std::cout << x << " ";
                                x++;
                            }
                        } else {
                        
                            if(x>m) {
                            
                                std::cout << m << " ";
                                x--;
                            } else {
                                
                                std::cout << x << " ";
                                x--;
                            }
                        }
                    }
                    std::cout << "\n";
                }
            } else {
            
                for(int j=(n+1); j>1; j--) {
                
                    int y=0;
                    for(int k=(n+1); k>j; k--) {
                    
                        std::cout << "  ";
                    }
                    for(int l=1; l<(j*2); l++) {
                    
                        if(l < j) {
                            
                            if(y>m) {
                            
                                std::cout << m << " ";
                                y++;
                            } else {    
                                std::cout << y << " ";
                                y++;
                            }
                        } else {
                        
                            if(y>m) {
                            
                                std::cout << m << " ";
                                y--;
                            } else {
                                
                                std::cout << y << " ";
                                y--;
                            }
                        }
                    }
                    std::cout << "\n";
                }
            }
        }
    
    } else {
    
        for(int i=1; i<n; i++) {
        
            if(i%2 != 0) {
            
                for(int j=1; j<=(m+1); j++) {
                
                    int x = 0;
                    for(int k=m; k>=j; k--) {
                    
                        std::cout << "  ";

                    }
                    for(int l=1; l<=(j*2)-1; l++) {
                    
                        if(l<j) {
                            
                            if(x>m) {
                            
                                std::cout << m << " ";
                                x++;
                            } else {
                                
                                std::cout << x << " ";
                                x++;
                            }
                        } else {
                        
                            if(x>m) {
                            
                                std::cout << m << " ";
                                x--;
                            } else {
                                
                                std::cout << x << " ";
                                x--;
                            }
                        }
                    }
                    std::cout << "\n";
                }
            } else {
            
                for(int j=(m+1); j>1; j--) {
                
                    int y=0;
                    for(int k=(m+1); k>j; k--) {
                    
                        std::cout << "  ";
                    }
                    for(int l=1; l<(j*2); l++) {
                    
                        if(l < j) {
                            
                            if(y>m) {
                            
                                std::cout << m << " ";
                                y++;
                            } else {    
                                std::cout << y << " ";
                                y++;
                            }
                        } else {
                        
                            if(y>m) {
                            
                                std::cout << m << " ";
                                y--;
                            } else {
                                
                                std::cout << y << " ";
                                y--;
                            }
                        }
                    }
                    std::cout << "\n";
                }
            }
        }
    }
    return 0;
}
