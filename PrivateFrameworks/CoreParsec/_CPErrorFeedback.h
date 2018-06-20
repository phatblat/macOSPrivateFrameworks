//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPErrorFeedback.h"
#import "_CPProcessableFeedback.h"

@class NSData, NSDictionary, NSString, _CPError;

@interface _CPErrorFeedback : PBCodable <_CPProcessableFeedback, _CPErrorFeedback, NSSecureCoding>
{
    unsigned long long _timestamp;
    _CPError *_error;
    _CPError *_underlyingError;
}

@property(retain, nonatomic) _CPError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(retain, nonatomic) _CPError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)init;
@property(readonly, nonatomic) BOOL requiresQueryId;
- (id)initWithError:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end

