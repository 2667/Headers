//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PirateMtopParams : NSObject
{
    _Bool _needEcodeSign;
    NSMutableDictionary *_businessParams;
    NSString *_version;
}

@property(nonatomic) _Bool needEcodeSign; // @synthesize needEcodeSign=_needEcodeSign;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableDictionary *businessParams; // @synthesize businessParams=_businessParams;
- (void).cxx_destruct;
- (void)addBusinessParam:(id)arg1 withKey:(id)arg2;
- (id)init;

@end

