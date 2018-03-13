//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LPLinkHTMLGeneratorDelegate.h"

@class LPLinkHTMLGenerator, LPLinkMetadata, NSString, NSURL, WebView;

@interface LPLinkHTMLTextGenerator : NSObject <LPLinkHTMLGeneratorDelegate>
{
    WebView *_webView;
    LPLinkHTMLGenerator *_DOMGenerator;
    NSString *_generatedFragmentText;
    NSString *_generatedDocumentText;
    id <LPLinkHTMLTextGeneratorDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <LPLinkHTMLTextGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)linkHTMLGenerator:(id)arg1 URLForResource:(id)arg2 withMIMEType:(id)arg3;
@property(readonly, copy, nonatomic) NSString *HTMLDocumentString;
@property(readonly, copy, nonatomic) NSString *HTMLFragmentString;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(copy, nonatomic) LPLinkMetadata *metadata;
@property(nonatomic) BOOL generateEmailCompatibleMarkup;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

