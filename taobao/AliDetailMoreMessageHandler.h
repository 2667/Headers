//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIViewController;
@protocol AliDetailUpdateMessageDelegate;

@interface AliDetailMoreMessageHandler : NSObject
{
    id <AliDetailUpdateMessageDelegate> _navigator;
    UIViewController *_viewController;
}

+ (long long)messageType;
+ (void)setMessageType:(long long)arg1;
+ (long long)badgeCount;
+ (void)setBadgeCount:(long long)arg1;
+ (id)sharedMessageHandler;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <AliDetailUpdateMessageDelegate> navigator; // @synthesize navigator=_navigator;
- (void).cxx_destruct;
- (void)messageCountChanged:(id)arg1;
- (void)dealloc;
- (void)setDetailNavigator:(id)arg1 viewController:(id)arg2;
- (id)init;

@end

