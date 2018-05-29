//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UIViewController;

@interface WBNLLiveVCCache : NSObject
{
    UIViewController *_currentLiveViewController;
    NSMutableDictionary *_liveIdDict;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *liveIdDict; // @synthesize liveIdDict=_liveIdDict;
@property(nonatomic) __weak UIViewController *currentLiveViewController; // @synthesize currentLiveViewController=_currentLiveViewController;
- (void).cxx_destruct;
- (void)initData;
- (void)dismissViewController:(id)arg1 animation:(_Bool)arg2;
- (void)dismissLiveViewControllerAnimated:(_Bool)arg1;
- (_Bool)checkIsHaveContainerId:(id)arg1;
- (void)addContainerId:(id)arg1;
- (id)init;

@end

