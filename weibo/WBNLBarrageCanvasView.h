//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface WBNLBarrageCanvasView : UIView
{
    _Bool _hidden_comments;
    _Bool _isReceiveDanmu;
    int _status;
    long long _viewMode;
    NSMutableArray *_spriteViewArray;
    NSMutableArray *_railArray;
    double _during;
}

@property(nonatomic) _Bool isReceiveDanmu; // @synthesize isReceiveDanmu=_isReceiveDanmu;
@property(nonatomic) double during; // @synthesize during=_during;
@property(retain, nonatomic) NSMutableArray *railArray; // @synthesize railArray=_railArray;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSMutableArray *spriteViewArray; // @synthesize spriteViewArray=_spriteViewArray;
@property(nonatomic) _Bool hidden_comments; // @synthesize hidden_comments=_hidden_comments;
@property(nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
- (void).cxx_destruct;
- (void)clearComment;
- (void)clearBarrages;
- (void)animateSpriteView:(id)arg1 dstFrame:(struct CGRect)arg2;
- (void)processBarrage:(id)arg1;
- (void)passOne:(id)arg1;
- (id)getOne:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)receiveBarrage:(id)arg1 isBarrage:(_Bool)arg2;
- (_Bool)isFullShow:(id)arg1;
- (long long)usefullLine;
- (void)resetRailArray;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

