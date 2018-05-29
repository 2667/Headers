//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSURL, UIImageView, UITapGestureRecognizer;

@interface WGGameVideoIntroCell : UITableViewCell
{
    NSURL *_videoUrl;
    NSURL *_posterUrl;
    UIImageView *_backImageView;
    UIImageView *_maskImageView;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) NSURL *posterUrl; // @synthesize posterUrl=_posterUrl;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)tapAction:(id)arg1;

@end

