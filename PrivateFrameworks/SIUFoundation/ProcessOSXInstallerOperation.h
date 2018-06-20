//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SIUFoundation/ProcessSourceOperation.h>

#import "NSXMLParserDelegate.h"

@class NSDictionary, NSString;

@interface ProcessOSXInstallerOperation : ProcessSourceOperation <NSXMLParserDelegate>
{
    NSDictionary *_attributes;
    BOOL _foundParent;
    BOOL _inSystemImageSection;
    unsigned long long _systemImageSectionInstallSize;
    unsigned long long _otherInstallSize;
}

@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void)main;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)readOSInfoFromOSInstallMpkg:(id)arg1;
- (void)readInstallInfo;
- (id)pathToSupportFile:(id)arg1;
- (id)mountRecordForApp;
- (void)addVolumeAttributesToDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithSourcePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

