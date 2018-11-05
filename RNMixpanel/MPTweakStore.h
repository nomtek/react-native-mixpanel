//
//  MPTweakStore.h
//  RNMixpanel
//
//  Created by Seweryn Załupka on 02/11/2018.
//  Copyright © 2018 Davide Scalzo. All rights reserved.
//

#import "MPTweak.h"

@class MPTweak;

/**
 @abstract The global store for tweaks.
 */
@interface MPTweakStore : NSObject

/**
 @abstract Creates or returns the shared global store.
 */
+ (instancetype)sharedInstance;

/**
 @abstract The tweak categories in the store.
 */
@property (nonatomic, copy, readonly) NSArray *tweaks;

/**
 @abstract Finds a tweak by name.
 @param name The name of the tweak to find.
 @return The tweak if found, nil otherwise.
 */
- (MPTweak *)tweakWithName:(NSString *)name;

/**
 @abstract Registers a tweak with the store.
 @param tweak The tweak to register.
 */
- (void)addTweak:(MPTweak *)tweak;

/**
 @abstract Removes a tweak from the store.
 @param tweak The tweak to remove.
 */
- (void)removeTweak:(MPTweak *)tweak;

/**
 @abstract Resets all tweaks in the store.
 */
- (void)reset;

@end
