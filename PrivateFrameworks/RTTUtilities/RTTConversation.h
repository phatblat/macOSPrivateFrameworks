//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableArray, NSString;

@interface RTTConversation : NSObject <NSSecureCoding>
{
    NSString *_callIdentifier;
    NSMutableArray *_utterances;
}

+ (BOOL)supportsSecureCoding;
+ (id)conversationWithID:(id)arg1 andUtterances:(id)arg2;
+ (id)conversationWithCall:(id)arg1;
@property(retain, nonatomic) NSMutableArray *utterances; // @synthesize utterances=_utterances;
@property(retain, nonatomic) NSString *callIdentifier; // @synthesize callIdentifier=_callIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)cleanup;
- (unsigned long long)utteranceCountForMe:(BOOL)arg1;
- (id)lastUtteranceForMe:(BOOL)arg1;
- (id)processBackspaceForMe:(BOOL)arg1;
- (id)appendStringFromOtherContactPath:(id)arg1;
- (void)addUtterance:(id)arg1;
- (id)mergeUtterancesIfPossible;
- (id)otherContactPath;
- (BOOL)isEqualToConversation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

