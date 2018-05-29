//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UIView, WBVideoItem;

@interface WBPageInfoVideoPlayButton : UIControl
{
    UIImageView *_backgroundImageView;
    UIImageView *_playImageView;
    UIView *_trafficContentView;
    UIImageView *_trafficPlayImageView;
    UILabel *_trafficInfoLabel;
    WBVideoItem *_videoItem;
}

@property(retain, nonatomic) WBVideoItem *videoItem; // @synthesize videoItem=_videoItem;
@property(retain, nonatomic) UILabel *trafficInfoLabel; // @synthesize trafficInfoLabel=_trafficInfoLabel;
@property(retain, nonatomic) UIImageView *trafficPlayImageView; // @synthesize trafficPlayImageView=_trafficPlayImageView;
@property(retain, nonatomic) UIView *trafficContentView; // @synthesize trafficContentView=_trafficContentView;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)reachabilityChanged:(id)arg1;
- (void)updateDisplay;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

