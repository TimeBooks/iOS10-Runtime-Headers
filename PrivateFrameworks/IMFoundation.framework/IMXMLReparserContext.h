/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSArray, NSString, NSError, NSDictionary;

@interface IMXMLReparserContext : NSObject  {
    NSString *_inContent;
    NSString *_outContent;
    NSArray *_attributesToPreserve;
    NSDictionary *_attributesToMerge;
    NSError *_error;
}

@property(readonly) NSArray * attributesToPreserve;
@property(readonly) NSDictionary * attributesToMerge;
@property(readonly) NSError * error;
@property(readonly) NSString * outContent;
@property(readonly) NSString * _inContent;


- (id)outContent;
- (id)initWithContent:(id)arg1 attributesToPreserve:(id)arg2 attributesToMerge:(id)arg3;
- (id)attributesToMerge;
- (id)attributesToPreserve;
- (void)_setOutContent:(id)arg1 error:(id)arg2;
- (id)_inContent;
- (void)dealloc;
- (id)error;

@end