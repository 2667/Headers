//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIEvent, UIView, WBUserListOverlayView;

@protocol WBUserListOverlayViewDelegate <NSObject>
- (UIView *)overlayView:(WBUserListOverlayView *)arg1 didHitTest:(struct CGPoint)arg2 withEvent:(UIEvent *)arg3;
@end

