//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURLRequest;

@interface RCTImageSource : NSObject
{
    _Bool _packagerAsset;
    NSURLRequest *_request;
    double _scale;
    struct CGSize _size;
}

@property(nonatomic) _Bool packagerAsset; // @synthesize packagerAsset=_packagerAsset;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)imageSourceWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)initWithURLRequest:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;

@end
