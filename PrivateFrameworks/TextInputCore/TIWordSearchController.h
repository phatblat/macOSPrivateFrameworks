//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface TIWordSearchController : NSObject
{
    NSMapTable *_inputModeToWordSearchMapping;
}

+ (id)sharedWordSearchController;
@property(retain, nonatomic) NSMapTable *inputModeToWordSearchMapping; // @synthesize inputModeToWordSearchMapping=_inputModeToWordSearchMapping;
- (id)wordSearchForInputMode:(id)arg1;
- (void)setWordSearch:(id)arg1 forInputMode:(id)arg2;
- (void)dealloc;
- (id)init;

@end

