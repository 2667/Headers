//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXTrueLoveBaseModule.h"

@class UIButton, UIImageView, UILabel;

@interface YXLiveNoTrueLoveAnchorViewModule : YXTrueLoveBaseModule
{
    CDUnknownBlockType _noActiveBlock;
    UIImageView *_noTrueLoveImage;
    UILabel *_trueLoveLabel1;
    UILabel *_trueLoveLabel2;
    UIButton *_jumpButton;
}

@property(retain, nonatomic) UIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain, nonatomic) UILabel *trueLoveLabel2; // @synthesize trueLoveLabel2=_trueLoveLabel2;
@property(retain, nonatomic) UILabel *trueLoveLabel1; // @synthesize trueLoveLabel1=_trueLoveLabel1;
@property(retain, nonatomic) UIImageView *noTrueLoveImage; // @synthesize noTrueLoveImage=_noTrueLoveImage;
@property(copy, nonatomic) CDUnknownBlockType noActiveBlock; // @synthesize noActiveBlock=_noActiveBlock;
- (void).cxx_destruct;
- (double)height;
- (void)jumpTAButag;
- (void)setData:(id)arg1;
- (void)refreshViewData;
- (void)initView;
- (id)initWithWidth:(double)arg1 type:(long long)arg2 container:(id)arg3;

@end

