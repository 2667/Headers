//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "AWEStoryCubeDismissControllerProtocol-Protocol.h"

@class NSString;

@interface AWELiveHotViewControllerNavigationController : UINavigationController <AWEStoryCubeDismissControllerProtocol>
{
}

- (_Bool)shouldBeginInteractiveTransition;
- (struct CGRect)viewControllerImageViewOriginFrame;
- (id)viewControllerImageView;
- (void)viewControllerWillCancelTransition;
- (void)viewControllerDidFinishTransition;
- (void)viewControllerDidCancelTranstion;
- (void)viewControllerWillBeginTransition;
- (id)rootViewController;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

