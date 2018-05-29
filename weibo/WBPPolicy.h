//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPDMObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSSet;

@interface WBPPolicy : WBPDMObject <NSSecureCoding, NSCopying>
{
    _Bool _allowInvalidCertificates;
    _Bool _validatesDomainName;
    unsigned long long _SSLPinningMode;
    NSSet *_pinnedCertificates;
    unsigned long long _pMode;
    NSSet *_PPKeys;
}

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingPPKeys;
+ (id)pWPM:(unsigned long long)arg1 wPC:(id)arg2;
+ (id)pWPM:(unsigned long long)arg1;
+ (id)dP;
+ (id)dPCs;
+ (id)cIB:(id)arg1;
+ (id)DMD;
@property(retain, nonatomic) NSSet *PPKeys; // @synthesize PPKeys=_PPKeys;
@property(nonatomic) unsigned long long pMode; // @synthesize pMode=_pMode;
@property(nonatomic) _Bool validatesDomainName; // @synthesize validatesDomainName=_validatesDomainName;
@property(nonatomic) _Bool allowInvalidCertificates; // @synthesize allowInvalidCertificates=_allowInvalidCertificates;
@property(retain, nonatomic) NSSet *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;
@property(readonly, nonatomic) unsigned long long SSLPinningMode; // @synthesize SSLPinningMode=_SSLPinningMode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)eST:(struct __SecTrust *)arg1 fD:(id)arg2;
- (void)sPC:(id)arg1;
- (id)init;

@end

