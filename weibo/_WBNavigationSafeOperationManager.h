//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, UIViewController;

@interface _WBNavigationSafeOperationManager : NSObject
{
    _Bool _isInAnimation;
    _Bool _cancled;
    NSMutableArray *_block_list;
    UIViewController *_popingViewController;
}

+ (id)sharedManager;
@property _Bool cancled; // @synthesize cancled=_cancled;
@property(retain) UIViewController *popingViewController; // @synthesize popingViewController=_popingViewController;
@property(retain) NSMutableArray *block_list; // @synthesize block_list=_block_list;
- (void).cxx_destruct;
@property _Bool isInAnimation;
- (void)operationAvoidAnimation:(CDUnknownBlockType)arg1;
- (id)init;

@end

