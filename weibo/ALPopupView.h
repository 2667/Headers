//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIControl;

@interface ALPopupView : UIView
{
    _Bool _dismissWhenTouchBackground;
    UIControl *_backgroundView;
    UIView *_contentView;
    long long _popupPositon;
    long long _animationType;
    UIColor *_backgroundColor;
}

+ (id)sharedPopupView;
+ (void)dismiss;
+ (void)showWithContentView:(id)arg1 frame:(struct CGRect)arg2 position:(long long)arg3 maskType:(long long)arg4 succeed:(CDUnknownBlockType)arg5;
+ (void)showWithContentViewFrame:(struct CGRect)arg1 position:(long long)arg2 maskType:(long long)arg3;
+ (void)showWithPositon:(long long)arg1;
+ (void)showWithContentViewFrame:(struct CGRect)arg1;
+ (void)show;
+ (_Bool)dismissWhenTouchBackground;
+ (void)setDismissWhenTouchBackground:(_Bool)arg1;
+ (id)backgroundColor;
+ (void)setBackgroundColor:(id)arg1;
+ (long long)animationType;
+ (void)setAnimationType:(long long)arg1;
+ (id)contentView;
+ (void)setContentView:(id)arg1;
@property(nonatomic) _Bool dismissWhenTouchBackground; // @synthesize dismissWhenTouchBackground=_dismissWhenTouchBackground;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) long long popupPositon; // @synthesize popupPositon=_popupPositon;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIControl *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)removeAllContents;
- (void)dismiss;
- (struct CGRect)frameForPosition:(long long)arg1;
- (unsigned long long)autoresizeMaskForPosition:(long long)arg1;
- (void)showWithContentViewFrame:(struct CGRect)arg1 position:(long long)arg2 maskType:(long long)arg3;
- (id)currentWindow;
- (void)showWithContentView:(id)arg1 frame:(struct CGRect)arg2 position:(long long)arg3 maskType:(long long)arg4 succeed:(CDUnknownBlockType)arg5;

@end

