//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, QZVideoPlayerLightToolbar;

@interface QZVideoRooftopProgressSliderView : UIView
{
    _Bool _type;
    NSMutableArray *_durationArr;
    NSMutableArray *_sliderArr;
    QZVideoPlayerLightToolbar *_lightToolbar;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) QZVideoPlayerLightToolbar *lightToolbar; // @synthesize lightToolbar=_lightToolbar;
@property(retain, nonatomic) NSMutableArray *sliderArr; // @synthesize sliderArr=_sliderArr;
@property(retain, nonatomic) NSMutableArray *durationArr; // @synthesize durationArr=_durationArr;
@property(nonatomic) _Bool type; // @synthesize type=_type;

@end
