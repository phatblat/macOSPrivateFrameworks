//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/WDCharacterRun.h>

@class WDRubyProperties;

__attribute__((visibility("hidden")))
@interface WDRubyRun : WDCharacterRun
{
    WDCharacterRun *mPhoneticRun;
    WDRubyProperties *mRubyProperties;
}

- (void).cxx_destruct;
- (id)description;
- (id)rubyBase;
- (void)appendPhoneticRunString:(id)arg1;
- (void)setPhoneticRunString:(id)arg1;
- (id)phoneticRunString;
- (id)phoneticRun;
- (id)rubyProperties;
- (int)runType;
- (id)initWithParagraph:(id)arg1;

@end

