//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "KHPDFGeneratorDelegate.h"

@class KHProjectBundle, NSButton, NSProgressIndicator, NSString, NSURL;

@interface KHProjectExportWindowController : NSWindowController <KHPDFGeneratorDelegate>
{
    BOOL _createProductionFile;
    BOOL _generatorStarted;
    BOOL _generatorRunning;
    BOOL _generatorCanceled;
    NSURL *_destinationFileURL;
    NSString *_filePrefix;
    KHProjectBundle *_projectBundle;
    NSString *_statusMessage;
    NSProgressIndicator *_progressIndicator;
    NSButton *_cancelButton;
    double _renderingTime;
}

@property BOOL generatorCanceled; // @synthesize generatorCanceled=_generatorCanceled;
@property BOOL generatorRunning; // @synthesize generatorRunning=_generatorRunning;
@property BOOL generatorStarted; // @synthesize generatorStarted=_generatorStarted;
@property(nonatomic) double renderingTime; // @synthesize renderingTime=_renderingTime;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(readonly) KHProjectBundle *projectBundle; // @synthesize projectBundle=_projectBundle;
@property(copy, nonatomic) NSString *filePrefix; // @synthesize filePrefix=_filePrefix;
@property(nonatomic) BOOL createProductionFile; // @synthesize createProductionFile=_createProductionFile;
@property(copy, nonatomic) NSURL *destinationFileURL; // @synthesize destinationFileURL=_destinationFileURL;
- (void).cxx_destruct;
- (void)keepModalResponsive;
- (BOOL)pdfShouldAbort;
- (void)pdfProgress:(double)arg1 page:(long long)arg2 maxPage:(long long)arg3 project:(id)arg4;
- (void)cancel:(id)arg1;
- (void)windowDidLoad;
- (void)generatorDidFinish;
- (void)startGenerator;
- (void)updateProgress:(double)arg1;
- (id)documentURLForProject:(id)arg1;
- (id)directoryURLForProject:(id)arg1;
- (id)initWithProjectBundle:(id)arg1;

@end

