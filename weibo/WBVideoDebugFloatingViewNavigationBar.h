//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

@class UIButton, UIImageView;

@interface WBVideoDebugFloatingViewNavigationBar : UINavigationBar
{
    UIButton *_closeButton;
    UIButton *_fullscreenButton;
    UIButton *_settingsButton;
    UIImageView *_dragHandleImageView;
}

@property(retain, nonatomic) UIImageView *dragHandleImageView; // @synthesize dragHandleImageView=_dragHandleImageView;
@property(retain, nonatomic) UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(retain, nonatomic) UIButton *fullscreenButton; // @synthesize fullscreenButton=_fullscreenButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

