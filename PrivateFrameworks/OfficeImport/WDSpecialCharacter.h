//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDSpecialCharacter : WDRun
{
    WDCharacterProperties *mProperties;
    int mType;
}

- (id)description;
- (id)initWithParagraph:(id)arg1;
- (void)setCharacterType:(int)arg1;
- (int)characterType;
- (int)runType;
- (void)clearProperties;
- (id)properties;
- (void)dealloc;

@end

