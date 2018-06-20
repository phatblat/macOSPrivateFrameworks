//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Navigation/MNListInstructionContents.h>

#import "MNInstructionContents.h"

@class NSArray, NSString;

@interface MNSignInstructionContents : MNListInstructionContents <MNInstructionContents>
{
    NSArray *_mergeFormats;
    NSArray *_continueFormats;
    NSArray *_maneuverFormats;
}

+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3;
@property(retain, nonatomic) NSArray *maneuverFormats; // @synthesize maneuverFormats=_maneuverFormats;
@property(retain, nonatomic) NSArray *continueFormats; // @synthesize continueFormats=_continueFormats;
@property(retain, nonatomic) NSArray *mergeFormats; // @synthesize mergeFormats=_mergeFormats;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasServerContent;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives;
- (id)_instructionsForFormats:(id)arg1;
@property(readonly, nonatomic) long long context;
- (id)description;
- (void)_populateFromStep:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *roadName;
@property(nonatomic) BOOL suppressFallback;
@property(nonatomic) BOOL suppressNames;

@end

