//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface WBVideoEditFilterModel : NSObject
{
    unsigned long long _filterType;
    NSString *_filterName;
    UIImage *_originalImage;
    UIImage *_displayImage;
}

+ (id)modelWithFilterType:(unsigned long long)arg1;
@property(retain, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(nonatomic) unsigned long long filterType; // @synthesize filterType=_filterType;
- (void).cxx_destruct;

@end

