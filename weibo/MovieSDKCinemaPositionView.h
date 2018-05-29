//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface MovieSDKCinemaPositionView : UIView
{
    _Bool _circling;
    UIImageView *_positionIcon;
    UILabel *_positionLabel;
    UIImageView *_refreshView;
    NSString *_position;
}

@property(retain, nonatomic) NSString *position; // @synthesize position=_position;
@property(nonatomic) _Bool circling; // @synthesize circling=_circling;
@property(retain, nonatomic) UIImageView *refreshView; // @synthesize refreshView=_refreshView;
@property(retain, nonatomic) UILabel *positionLabel; // @synthesize positionLabel=_positionLabel;
@property(retain, nonatomic) UIImageView *positionIcon; // @synthesize positionIcon=_positionIcon;
- (void).cxx_destruct;
- (void)refreshCircling:(_Bool)arg1;
- (void)requestPosition:(_Bool)arg1;
- (void)refreshPosition:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

