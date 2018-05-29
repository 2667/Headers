//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol ResourceViewDelegate <NSObject>
- (void)ResourceStatusChanged:(UIView *)arg1 center:(struct CGPoint)arg2 scale:(double)arg3 rotate:(double)arg4 fontSize:(double)arg5;

@optional
- (void)ResourceBeginTouched:(UIView *)arg1;
- (void)ResourceTouched:(UIView *)arg1;
- (void)ResourceDoubleTap:(UIView *)arg1 withText:(NSString *)arg2;
@end

