//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BTDRouterViewControllerProtocol-Protocol.h"

@class NSString, UILabel;

@interface AWEDebugPushViewController : UIViewController <BTDRouterViewControllerProtocol>
{
    UILabel *_pushToken;
    UILabel *_lastNotification;
}

+ (void)load;
@property(retain, nonatomic) UILabel *lastNotification; // @synthesize lastNotification=_lastNotification;
@property(retain, nonatomic) UILabel *pushToken; // @synthesize pushToken=_pushToken;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

