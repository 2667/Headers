//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIView;

@interface WBMusicListTableViewCell : UITableViewCell
{
    UILabel *titleLabel;
    UILabel *artistLabel;
    UIView *isPlayingBgView;
    _Bool _isPlaying;
    NSString *_title;
    NSString *_artist;
    double _duration;
    UILabel *_durationLabel;
    UIView *_bottomLine;
}

@property(copy, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(copy, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)stringForDuration:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

