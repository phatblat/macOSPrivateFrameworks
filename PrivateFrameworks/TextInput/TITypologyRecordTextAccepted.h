//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardCandidate;

@interface TITypologyRecordTextAccepted : TITypologyRecord
{
    TIKeyboardCandidate *_candidate;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
- (void).cxx_destruct;
- (id)changedText;
- (id)shortDescription;
- (id)textSummary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end

