//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, UIImageView;

@interface ARMapWGHandGuiderView : UIView
{
    UIImageView *_handView;
    CADisplayLink *_link;
    _Bool _showing;
}

@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startAnimation;
- (void)refresh;
- (void)stopDisplayLink;
- (void)startDisplayLink;
- (void)dismiss;
- (void)show;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

