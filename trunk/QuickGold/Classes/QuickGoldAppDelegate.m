//
//  QuickGoldAppDelegate.m
//  QuickGold
//
#import "QuickGoldAppDelegate.h"

@implementation QuickGoldAppDelegate

@synthesize window;

- (void)applicationDidFinishLaunching:(UIApplication *)application {	
	
	// Override point for customization after app launch	
    [window makeKeyAndVisible];
}


- (void)dealloc {
	[window release];
	[super dealloc];
}


@end
