//
//  objC1_HelloWorldAppDelegate.h
//  objC1-HelloWorld
//
//  Created by Andrew Hoffman on 12/31/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface objC1_HelloWorldAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
