//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WBComposeElement, WBUniversialViewController;

@protocol WBComposeElementDelegate <NSObject>
- (WBUniversialViewController *)baseViewControllerForComposeElement:(WBComposeElement *)arg1;
- (void)composeElementContentDidChanged:(WBComposeElement *)arg1;

@optional
- (id)composeElement:(WBComposeElement *)arg1 composeValueForKey:(NSString *)arg2;
- (void)composeElement:(WBComposeElement *)arg1 setComposeValue:(id)arg2 forKey:(NSString *)arg3;
- (void)composeElementDidCancelPickData:(WBComposeElement *)arg1;
- (void)composeElementDidFinishPickData:(WBComposeElement *)arg1;
- (void)composeElementContentDidBeginEdit:(WBComposeElement *)arg1;
@end

