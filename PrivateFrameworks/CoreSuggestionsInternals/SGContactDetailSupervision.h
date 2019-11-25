//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface SGContactDetailSupervision : NSObject
{
    BOOL _regexBelongsToSender;
    BOOL _regexDoesNotBelongToSender;
    BOOL _isFirstPerson;
    BOOL _isThirdPerson;
    BOOL _isUnlikelyPhone;
    NSArray *_matchingContacts;
    unsigned long long _ignoreAfter;
    NSDate *_matchDate;
    NSString *_senderDisplayName;
}

@property(nonatomic) __weak NSString *senderDisplayName; // @synthesize senderDisplayName=_senderDisplayName;
@property(nonatomic) __weak NSDate *matchDate; // @synthesize matchDate=_matchDate;
@property(nonatomic) unsigned long long ignoreAfter; // @synthesize ignoreAfter=_ignoreAfter;
@property(nonatomic) BOOL isUnlikelyPhone; // @synthesize isUnlikelyPhone=_isUnlikelyPhone;
@property(nonatomic) __weak NSArray *matchingContacts; // @synthesize matchingContacts=_matchingContacts;
@property(nonatomic) BOOL isThirdPerson; // @synthesize isThirdPerson=_isThirdPerson;
@property(nonatomic) BOOL isFirstPerson; // @synthesize isFirstPerson=_isFirstPerson;
@property(nonatomic) BOOL regexDoesNotBelongToSender; // @synthesize regexDoesNotBelongToSender=_regexDoesNotBelongToSender;
@property(nonatomic) BOOL regexBelongsToSender; // @synthesize regexBelongsToSender=_regexBelongsToSender;
- (void).cxx_destruct;
- (struct SGMContactDetailFoundIn_)metricsContactDetailFoundIn;
- (struct SGMContactDetailOwner_)metricsContactDetailOwner;
- (id)initWithEntity:(id)arg1 ddMatch:(id)arg2 isUnlikelyPhone:(BOOL)arg3;

@end

