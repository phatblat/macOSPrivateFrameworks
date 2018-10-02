//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMDocumentMapper.h>

#import "CMMapperRoot.h"

@class NSString, WDDocument;

__attribute__((visibility("hidden")))
@interface WMDocumentMapper : CMDocumentMapper <CMMapperRoot>
{
    NSString *mFileName;
}

- (void)setFileName:(id)arg1;
- (id)fileName;
- (void).cxx_destruct;
- (struct CGSize)contentSizeForDevice;
- (struct CGSize)pageSizeForDevice;
- (id)documentTitle;
- (id)styleMatrix;
- (id)archiver;
- (void)mapWithState:(id)arg1;
- (void)mapDefaultCssStylesAt:(id)arg1;
- (int)defaultTabWidth;
- (id)blipAtIndex:(unsigned int)arg1;
- (double)bottomMargin;
- (double)headerMargin;
- (double)topMargin;
- (double)rightMargin;
- (double)leftMargin;
- (BOOL)hasSessionBreakAtIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly) WDDocument *document; // @dynamic document;

@end

