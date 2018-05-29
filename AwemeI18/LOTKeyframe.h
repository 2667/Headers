//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LOTBezierData, NSArray, NSNumber, UIColor;

@interface LOTKeyframe : NSObject
{
    _Bool _isHold;
    NSNumber *_keyframeTime;
    double _floatValue;
    UIColor *_colorValue;
    LOTBezierData *_pathData;
    NSArray *_arrayValue;
    struct CGPoint _inTangent;
    struct CGPoint _outTangent;
    struct CGPoint _spatialInTangent;
    struct CGPoint _spatialOutTangent;
    struct CGPoint _pointValue;
    struct CGSize _sizeValue;
}

@property(readonly, nonatomic) NSArray *arrayValue; // @synthesize arrayValue=_arrayValue;
@property(readonly, nonatomic) LOTBezierData *pathData; // @synthesize pathData=_pathData;
@property(readonly, nonatomic) UIColor *colorValue; // @synthesize colorValue=_colorValue;
@property(readonly, nonatomic) struct CGSize sizeValue; // @synthesize sizeValue=_sizeValue;
@property(readonly, nonatomic) struct CGPoint pointValue; // @synthesize pointValue=_pointValue;
@property(readonly, nonatomic) double floatValue; // @synthesize floatValue=_floatValue;
@property(readonly, nonatomic) struct CGPoint spatialOutTangent; // @synthesize spatialOutTangent=_spatialOutTangent;
@property(readonly, nonatomic) struct CGPoint spatialInTangent; // @synthesize spatialInTangent=_spatialInTangent;
@property(readonly, nonatomic) struct CGPoint outTangent; // @synthesize outTangent=_outTangent;
@property(readonly, nonatomic) struct CGPoint inTangent; // @synthesize inTangent=_inTangent;
@property(readonly, nonatomic) _Bool isHold; // @synthesize isHold=_isHold;
@property(readonly, nonatomic) NSNumber *keyframeTime; // @synthesize keyframeTime=_keyframeTime;
- (void).cxx_destruct;
- (id)_colorValueFromArray:(id)arg1;
- (struct CGPoint)_pointFromValueDict:(id)arg1;
- (struct CGPoint)_pointFromValueArray:(id)arg1;
- (void)setupOutputWithData:(id)arg1;
- (void)remapValueWithBlock:(CDUnknownBlockType)arg1;
- (void)setData:(id)arg1;
- (id)copyWithData:(id)arg1;
- (id)initWithLOTKeyframe:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithKeyframe:(id)arg1;

@end

