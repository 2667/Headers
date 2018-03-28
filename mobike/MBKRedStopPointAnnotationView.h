//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKPOIAnnotaionBaseView.h"

#import "MBKAnnotationViewProtocol-Protocol.h"

@class CustomAnnotationDetailView, MBKRedStopCalloutView, NSString, UIImageView, UILabel;

@interface MBKRedStopPointAnnotationView : MBKPOIAnnotaionBaseView <MBKAnnotationViewProtocol>
{
    _Bool _selected;
    int _redAmount;
    int _level;
    int _areaType;
    NSString *_calloutTitle;
    UIImageView *_icon;
    UILabel *_title;
    MBKRedStopCalloutView *_calloutView;
    CustomAnnotationDetailView *_infoWindow;
}

@property(retain, nonatomic) CustomAnnotationDetailView *infoWindow; // @synthesize infoWindow=_infoWindow;
@property(nonatomic) int areaType; // @synthesize areaType=_areaType;
@property(retain, nonatomic) MBKRedStopCalloutView *calloutView; // @synthesize calloutView=_calloutView;
@property(nonatomic) int level; // @synthesize level=_level;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *calloutTitle; // @synthesize calloutTitle=_calloutTitle;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) int redAmount; // @synthesize redAmount=_redAmount;
- (void).cxx_destruct;
- (void)updateAnnotationInfoWithDescription:(id)arg1;
- (void)updateAnnotationInfoWith:(long long)arg1 duration:(long long)arg2 isCycling:(_Bool)arg3;
- (void)updateAppearance;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

