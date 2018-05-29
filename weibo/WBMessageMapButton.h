//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface WBMessageMapButton : UIButton
{
    _Bool _sendByMe;
    UIImageView *_mapImageView;
    UILabel *_addressLabel;
    struct CLLocationCoordinate2D _coordinate;
}

@property(nonatomic) _Bool sendByMe; // @synthesize sendByMe=_sendByMe;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UIImageView *mapImageView; // @synthesize mapImageView=_mapImageView;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1 sendByMe:(_Bool)arg2 needCropImage:(_Bool)arg3;
- (void)bindContent:(id)arg1;
- (id)secondFromDegree:(double)arg1;
- (void)loadImage:(id)arg1 sendByMe:(_Bool)arg2 needCropImage:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

