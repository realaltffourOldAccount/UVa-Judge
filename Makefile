.PHONY: clean All

All:
	@echo "----------Building project:[ UVa-00621-Secret-Research - Debug ]----------"
	@cd "UVa-00621-Secret-Research" && "$(MAKE)" -f  "UVa-00621-Secret-Research.mk"
clean:
	@echo "----------Cleaning project:[ UVa-00621-Secret-Research - Debug ]----------"
	@cd "UVa-00621-Secret-Research" && "$(MAKE)" -f  "UVa-00621-Secret-Research.mk" clean
