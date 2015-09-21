//
//  CapitalMarketsContentService.h
//  AnyPresence SDK
//

/*!
 @header CapitalMarketsContentService
 @abstract CapitalMarketsContentService class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class CapitalMarketsContentService
 @abstract Generated model object: CapitalMarketsContentService.
 @discussion Use @link //apple_ref/occ/cat/CapitalMarketsContentService(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/CapitalMarketsContentService/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface CapitalMarketsContentService : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a CapitalMarketsContentService.
 @result Class representing the data source associated with a CapitalMarketsContentService.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var alertDate
 @abstract Generated model property: alert_date.
 */
@property (nonatomic, strong) NSString * alertDate;

/*!
 @var allAttachments
 @abstract Generated model property: all_attachments.
 */
@property (nonatomic, strong) NSArray * allAttachments;

/*!
 @var analystId
 @abstract Generated model property: analyst_id.
 */
@property (nonatomic, strong) NSString * analystId;

/*!
 @var analystType
 @abstract Generated model property: analyst_type.
 */
@property (nonatomic, strong) NSString * analystType;

/*!
 @var assetClass
 @abstract Generated model property: asset_class.
 */
@property (nonatomic, strong) NSString * assetClass;

/*!
 @var attachmentId
 @abstract Generated model property: attachment_id.
 */
@property (nonatomic, strong) NSNumber * attachmentId;

/*!
 @var authorDetails
 @abstract Generated model property: author_details.
 */
@property (nonatomic, strong) NSArray * authorDetails;

/*!
 @var authorId
 @abstract Generated model property: author_id.
 */
@property (nonatomic, strong) NSString * authorId;

/*!
 @var authorName
 @abstract Generated model property: author_name.
 */
@property (nonatomic, strong) NSString * authorName;

/*!
 @var authors
 @abstract Generated model property: authors.
 */
@property (nonatomic, strong) NSString * authors;

/*!
 @var company
 @abstract Generated model property: company.
 */
@property (nonatomic, strong) NSString * company;

/*!
 @var contentServicesType
 @abstract Generated model property: content_services_type.
 */
@property (nonatomic, strong) NSString * contentServicesType;

/*!
 @var contentType
 @abstract Generated model property: content_type.
 */
@property (nonatomic, strong) NSString * contentType;

/*!
 @var contentUrl
 @abstract Generated model property: content_url.
 */
@property (nonatomic, strong) NSString * contentUrl;

/*!
 @var dateString
 @abstract Generated model property: date_string.
 */
@property (nonatomic, strong) NSString * dateString;

/*!
 @var documentUrl
 @abstract Generated model property: document_url.
 */
@property (nonatomic, strong) NSString * documentUrl;

/*!
 @var encryptedId
 @abstract Generated model property: encrypted_id.
 */
@property (nonatomic, strong) NSString * encryptedId;

/*!
 @var fileLink
 @abstract Generated model property: file_link.
 */
@property (nonatomic, strong) NSString * fileLink;

/*!
 @var fileName
 @abstract Generated model property: file_name.
 */
@property (nonatomic, strong) NSString * fileName;

/*!
 @var fileType
 @abstract Generated model property: file_type.
 */
@property (nonatomic, strong) NSString * fileType;

/*!
 @var formatedPubDate
 @abstract Generated model property: formated_pub_date.
 */
@property (nonatomic, strong) NSString * formatedPubDate;

/*!
 @var formattedDateStr
 @abstract Generated model property: formatted_date_str.
 */
@property (nonatomic, strong) NSString * formattedDateStr;

/*!
 @var headline
 @abstract Generated model property: headline.
 */
@property (nonatomic, strong) NSString * headline;

/*!
 @var hitCount
 @abstract Generated model property: hit_count.
 */
@property (nonatomic, strong) NSNumber * hitCount;

/*!
 @var htmlEscapedTitle
 @abstract Generated model property: html_escaped_title.
 */
@property (nonatomic, strong) NSString * htmlEscapedTitle;

/*!
 @var image
 @abstract Generated model property: image.
 */
@property (nonatomic, strong) NSString * image;

/*!
 @var imageGroup
 @abstract Generated model property: image_group.
 */
@property (nonatomic, strong) NSArray * imageGroup;

/*!
 @var kv
 @abstract Generated model property: kv.
 */
@property (nonatomic, strong) NSString * kv;

/*!
 @var medialUrlIos
 @abstract Generated model property: medial_url_ios.
 */
@property (nonatomic, strong) NSString * medialUrlIos;

/*!
 @var mediaUrlAndroid
 @abstract Generated model property: media_url_android.
 */
@property (nonatomic, strong) NSString * mediaUrlAndroid;

/*!
 @var menuCode
 @abstract Generated model property: menu_code.
 */
@property (nonatomic, strong) NSString * menuCode;

/*!
 @var miliseconds
 @abstract Generated model property: miliseconds.
 */
@property (nonatomic, strong) NSString * miliseconds;

/*!
 @var oboFirstName
 @abstract Generated model property: obo_first_name.
 */
@property (nonatomic, strong) NSString * oboFirstName;

/*!
 @var oboLastName
 @abstract Generated model property: obo_last_name.
 */
@property (nonatomic, strong) NSString * oboLastName;

/*!
 @var oboPreferredName
 @abstract Generated model property: obo_preferred_name.
 */
@property (nonatomic, strong) NSString * oboPreferredName;

/*!
 @var pageCount
 @abstract Generated model property: page_count.
 */
@property (nonatomic, strong) NSNumber * pageCount;

/*!
 @var productList
 @abstract Generated model property: product_list.
 */
@property (nonatomic, strong) NSArray * productList;

/*!
 @var productType
 @abstract Generated model property: product_type.
 */
@property (nonatomic, strong) NSString * productType;

/*!
 @var pubDate
 @abstract Generated model property: pub_date.
 */
@property (nonatomic, strong) NSString * pubDate;

/*!
 @var pubId
 @abstract Generated model property: pub_id.
 */
@property (nonatomic, strong) NSString * pubId;

/*!
 @var pubKey
 @abstract Generated model property: pub_key.
 */
@property (nonatomic, strong) NSString * pubKey;

/*!
 @var refArticleTitle
 @abstract Generated model property: ref_article_title.
 */
@property (nonatomic, strong) NSString * refArticleTitle;

/*!
 @var refArticleUrl
 @abstract Generated model property: ref_article_url.
 */
@property (nonatomic, strong) NSString * refArticleUrl;

/*!
 @var region
 @abstract Generated model property: region.
 */
@property (nonatomic, strong) NSString * region;

/*!
 @var resdataUrl
 @abstract Generated model property: resdata_url.
 */
@property (nonatomic, strong) NSString * resdataUrl;

/*!
 @var rnum
 @abstract Generated model property: rnum.
 */
@property (nonatomic, strong) NSString * rnum;

/*!
 @var scale
 @abstract Generated model property: scale.
 */
@property (nonatomic, strong) NSArray * scale;

/*!
 @var sectors
 @abstract Generated model property: sectors.
 */
@property (nonatomic, strong) NSString * sectors;

/*!
 @var source
 @abstract Generated model property: source.
 */
@property (nonatomic, strong) NSString * source;

/*!
 @var summary
 @abstract Generated model property: summary.
 */
@property (nonatomic, strong) NSString * summary;

/*!
 @var synopsis
 @abstract Generated model property: synopsis.
 */
@property (nonatomic, strong) NSString * synopsis;

/*!
 @var template
 @abstract Generated model property: template.
 */
@property (nonatomic, strong) NSString * template;

/*!
 @var themeId
 @abstract Generated model property: theme_id.
 */
@property (nonatomic, strong) NSString * themeId;

/*!
 @var tickers
 @abstract Generated model property: tickers.
 */
@property (nonatomic, strong) NSString * tickers;

/*!
 @var title
 @abstract Generated model property: title.
 */
@property (nonatomic, strong) NSString * title;

/*!
 @var totalCount
 @abstract Generated model property: total_count.
 */
@property (nonatomic, strong) NSNumber * totalCount;

/*!
 @var videoType
 @abstract Generated model property: video_type.
 */
@property (nonatomic, strong) NSString * videoType;

/*!
 @var videoUrl
 @abstract Generated model property: video_url.
 */
@property (nonatomic, strong) NSString * videoUrl;

@end
