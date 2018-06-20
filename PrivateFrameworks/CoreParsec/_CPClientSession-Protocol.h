//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _CPFeedbackPayload;

@protocol _CPClientSession <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *feedbacks;
@property(copy, nonatomic) NSString *parsecDeveloperID;
@property(copy, nonatomic) NSString *version;
@property(nonatomic) BOOL removeTimestamps;
@property(nonatomic) double firstUseDate;
@property(nonatomic) BOOL firstUseOfTheDay;
@property(nonatomic) int previousSessionEndReason;
@property(nonatomic) double sessionStart;
@property(copy, nonatomic) NSDictionary *resourceVersions;
@property(copy, nonatomic) NSString *userGuidString;
@property(copy, nonatomic) NSString *agent;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPFeedbackPayload *)feedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackCount;
- (void)addFeedback:(_CPFeedbackPayload *)arg1;
- (void)clearFeedback;
- (void)setResourceVersions:(NSString *)arg1 forKey:(NSString *)arg2;
- (BOOL)getResourceVersions:(id *)arg1 forKey:(NSString *)arg2;
@end
