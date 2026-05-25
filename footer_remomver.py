from PyPDF2 import PdfReader, PdfWriter

reader = PdfReader("C:\\Users\\LENOVO\\Downloads\\sagunbastolaimproved.pdf")
writer = PdfWriter()

for page in reader.pages:
    page.mediabox.lower_left = (
        page.mediabox.left,
        page.mediabox.bottom + 25
    )

    writer.add_page(page)

with open("C:\\Users\\LENOVO\\Downloads\\sagunbastolaimproved2.pdf", "wb") as f:
    writer.write(f)

print("Done")