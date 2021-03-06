//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;
@protocol TTAd;

@interface TTAdCanvasTracker : NSObject
{
    _Bool _isDisplay;
    NSDictionary *_commonParamter;
    NSDate *_startStamp;
    NSDate *_loadStamp;
    NSDate *_fisnishStamp;
    NSDate *_lastImpression;
    double _stayDuration;
    NSString *_group_id;
    id <TTAd> _model;
}

+ (void)trackerWithModel:(id)arg1 tag:(id)arg2 label:(id)arg3 extra:(id)arg4;
+ (void)ad_logEvent:(id)arg1;
+ (id)tracker:(id)arg1;
@property(retain, nonatomic) id <TTAd> model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *group_id; // @synthesize group_id=_group_id;
@property(nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
@property(nonatomic) double stayDuration; // @synthesize stayDuration=_stayDuration;
@property(retain, nonatomic) NSDate *lastImpression; // @synthesize lastImpression=_lastImpression;
@property(retain, nonatomic) NSDate *fisnishStamp; // @synthesize fisnishStamp=_fisnishStamp;
@property(retain, nonatomic) NSDate *loadStamp; // @synthesize loadStamp=_loadStamp;
@property(retain, nonatomic) NSDate *startStamp; // @synthesize startStamp=_startStamp;
@property(copy, nonatomic) NSDictionary *commonParamter; // @synthesize commonParamter=_commonParamter;
- (void).cxx_destruct;
- (void)trackCanvasTag:(id)arg1 label:(id)arg2 dict:(id)arg3;
- (void)trackCanvasRN:(id)arg1;
- (void)trackLeave:(double)arg1;
- (void)wap_loadfinish;
- (void)wap_load;
- (void)markLeave:(_Bool)arg1;
- (void)markBeiginLoad;
- (void)wap_staypage;
- (void)native_page;

@end

