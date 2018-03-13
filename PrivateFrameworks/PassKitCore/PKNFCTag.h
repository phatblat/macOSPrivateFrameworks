//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface PKNFCTag : NSObject
{
    unsigned long long _technology;
    NSData *_tagIdentifier;
    NSData *_manufacturerIdentifier;
    NSData *_manufacturerParameter;
    NSData *_systemCode;
    NSData *_appData;
    NSData *_UID;
}

@property(copy, nonatomic) NSData *UID; // @synthesize UID=_UID;
@property(copy, nonatomic) NSData *appData; // @synthesize appData=_appData;
@property(copy, nonatomic) NSData *systemCode; // @synthesize systemCode=_systemCode;
@property(copy, nonatomic) NSData *manufacturerParameter; // @synthesize manufacturerParameter=_manufacturerParameter;
@property(copy, nonatomic) NSData *manufacturerIdentifier; // @synthesize manufacturerIdentifier=_manufacturerIdentifier;
@property(copy, nonatomic) NSData *tagIdentifier; // @synthesize tagIdentifier=_tagIdentifier;
@property(nonatomic) unsigned long long technology; // @synthesize technology=_technology;
- (void).cxx_destruct;
- (id)initWithNFTag:(id)arg1;

@end

