//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHProject, NSString;

@interface KHPDFGenerator : NSObject
{
    KHProject *_project;
    id <KHPDFGeneratorDelegate> _delegate;
    NSString *_gpuID;
}

@property(retain, nonatomic) id <KHPDFGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_pdfHeaderDictionaryWithPath:(id)arg1;
- (void)_retrieveGPUInfo;
- (id)_newComponentGeneratorForComponent:(id)arg1 project:(id)arg2;
- (id)pdfCreator;
- (BOOL)_createWithPath:(id)arg1 components:(id)arg2 pageCount:(long long)arg3 error:(id *)arg4;
- (BOOL)createPreviewWithPath:(id)arg1 error:(id *)arg2;
- (BOOL)createWithPath:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithProject:(id)arg1;

@end
