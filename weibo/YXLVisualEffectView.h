//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class UIBlurEffect, UIColor;

@interface YXLVisualEffectView : UIVisualEffectView
{
    UIBlurEffect *_blurEffect;
}

@property(retain, nonatomic) UIBlurEffect *blurEffect; // @synthesize blurEffect=_blurEffect;
- (void).cxx_destruct;
@property(nonatomic) double scale;
@property(nonatomic) double colorTintAlpha;
@property(nonatomic) double blurRadius;
@property(retain, nonatomic) UIColor *colorTint;
- (void)effectWithColor:(id)arg1 blurRadius:(double)arg2 alpha:(double)arg3;
- (id)init;
- (void)p_setValue:(id)arg1 forKey:(id)arg2;
- (id)p_valueForKey:(id)arg1;

@end

